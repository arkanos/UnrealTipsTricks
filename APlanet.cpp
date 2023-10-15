#include "APlanet.h"

#include "Kismet/KismetMathLibrary.h"

APlanet::APlanet()
{
	PlanetMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlanetMesh"));
	PlanetMesh->SetupAttachment(RootComponent);

	bTieneAnillos = DoesPlanetHaveRings(0.1f);
	if(bTieneAnillos)
	{
		PlanetRingsMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlanetRingsMesh"));
		PlanetRingsMesh->SetupAttachment(PlanetMesh);
	}
}

bool APlanet::DoesPlanetHaveRings(float Probability)
{
	return UKismetMathLibrary::RandomBoolWithWeight(Probability);
}

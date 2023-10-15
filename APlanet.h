UCLASS()
class ASTRONEXUS_API APlanet : public AActor
{
	GENERATED_BODY()

public:
	APlanet();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Planeta")
	TObjectPtr<UStaticMeshComponent> PlanetMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Planeta")
	TObjectPtr<UStaticMeshComponent> PlanetRingsMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Planeta")
	bool bHasRings = false;

	bool DoesPlanetHaveRings(float Probability);
};

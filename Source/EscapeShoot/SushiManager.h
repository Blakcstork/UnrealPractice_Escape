

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SushiManager.generated.h"

UCLASS()
class ESCAPESHOOT_API ASushiManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASushiManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

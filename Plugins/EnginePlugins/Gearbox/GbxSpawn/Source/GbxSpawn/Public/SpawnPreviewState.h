#pragma once
#include "CoreMinimal.h"
#include "PreviewState.h"
#include "SpawnPreviewState.generated.h"

class USpawnPointComponent;
class USpawnFactory;

USTRUCT(BlueprintType)
struct FSpawnPreviewState : public FPreviewState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    USpawnPointComponent* SpawnPointComponent;
    
    UPROPERTY()
    TArray<USpawnFactory*> PreviewFactories;
    
public:
    GBXSPAWN_API FSpawnPreviewState();
};


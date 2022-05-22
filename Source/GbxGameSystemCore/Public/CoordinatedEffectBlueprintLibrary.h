#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoordinatedEffectBlueprintLibrary.generated.h"

class UMaterialInterface;
class UMeshComponent;

UCLASS(BlueprintType)
class UCoordinatedEffectBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCoordinatedEffectBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static UMaterialInterface* GetOriginalOverrideMaterialAtIndex(UMeshComponent* MeshComponent, int32 Index, int32& OutActualIndex);
    
};


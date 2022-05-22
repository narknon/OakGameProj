#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "TestLibraryPerformance.generated.h"

class UObject;
class APawn;

UCLASS(BlueprintType)
class UTestLibraryPerformance : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTestLibraryPerformance();
    UFUNCTION(BlueprintCallable)
    static void WaitForFrames(UObject* WorldContextObject, int32 NumFrames, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateLevelGrid(TArray<FVector>& GridLocations, APawn* Pawn, float GridSize, bool bWalkableOnly);
    
};


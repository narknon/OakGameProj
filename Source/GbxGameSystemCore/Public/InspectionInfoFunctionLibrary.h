#pragma once
#include "CoreMinimal.h"
#include "EDebugDisplayVerbosityLevel.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InspectionInfo.h"
#include "InspectionInfoFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UInspectionInfoFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInspectionInfoFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void AddScreenOutput(UPARAM(Ref) FInspectionInfo& InspectionInfo, const FString& String, EDebugDisplayVerbosityLevel Verbosity);
    
    UFUNCTION(BlueprintCallable)
    static void AddAboveActorOutput(UPARAM(Ref) FInspectionInfo& InspectionInfo, const FString& String, EDebugDisplayVerbosityLevel Verbosity);
    
};


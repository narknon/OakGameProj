#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SparkBlueprintLibrary.generated.h"

class APlayerController;

UCLASS(BlueprintType)
class GBXSPARK_API USparkBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USparkBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void PostLeviathanEventWithAttribute(APlayerController* PlayerController, const FString& EventName, const FString& AttributeName, const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    static void PostLeviathanEvent(APlayerController* PlayerController, const FString& EventName);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TargetActorInfo.h"
#include "Perception/AIPerceptionTypes.h"
#include "UObject/NoExportTypes.h"
#include "TargetActorInfoLibrary.generated.h"

class UAISense;
class UTargetingComponent;
class AActor;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UTargetActorInfoLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTargetActorInfoLibrary();
    UFUNCTION(BlueprintPure)
    static bool IsSenseActive(const FTargetActorInfo& Info, TSubclassOf<UAISense> Sense);
    
    UFUNCTION(BlueprintPure)
    static bool IsExistingTarget(const FTargetActorInfo& Info);
    
    UFUNCTION(BlueprintPure)
    static bool IsDirectlySensed(const FTargetActorInfo& Info);
    
    UFUNCTION(BlueprintPure)
    static bool HasStimulusForSense(const FTargetActorInfo& Info, TSubclassOf<UAISense> Sense);
    
    UFUNCTION(BlueprintPure)
    static bool HasAnyKnownStimuli(const FTargetActorInfo& Info);
    
    UFUNCTION(BlueprintPure)
    static FVector GetStimulusLocation(const FTargetActorInfo& Info, TSubclassOf<UAISense> Sense);
    
    UFUNCTION(BlueprintPure)
    static bool GetStimulusForSense(const FTargetActorInfo& Info, TSubclassOf<UAISense> Sense, FAIStimulus& Stimulus);
    
    UFUNCTION(BlueprintPure)
    static FVector GetReceiverLocation(const FTargetActorInfo& Info, TSubclassOf<UAISense> Sense);
    
    UFUNCTION(BlueprintPure)
    static FVector GetBestStimulusLocation(const FTargetActorInfo& Info, float& Age);
    
    UFUNCTION(BlueprintPure)
    static bool GetBestStimulus(const FTargetActorInfo& Info, FAIStimulus& Stimulus);
    
    UFUNCTION(BlueprintPure)
    static FVector GetBestAttackLocation(const FTargetActorInfo& Info, FVector& OutTargetVelocity);
    
    UFUNCTION(BlueprintPure)
    static UTargetingComponent* FindActorTargetingComponent(AActor* Actor);
    
};


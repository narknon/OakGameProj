#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAITargetScoringBoost.h"
#include "TargetActorInfo.h"
#include "UObject/NoExportTypes.h"
#include "GbxBlackboardKeySelector.h"
#include "AITargetingBlueprintLibrary.generated.h"

class UAISense;
class AActor;

UCLASS(BlueprintType)
class GBXAI_API UAITargetingBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAITargetingBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static bool IsThreatenedByInfo(AActor* AIActor, const FTargetActorInfo& TargetInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool IsThreatenedBy(AActor* AIActor, AActor* Target);
    
    UFUNCTION(BlueprintPure)
    static float GetTargetSenseAge(const FTargetActorInfo& TargetInfo, TSubclassOf<UAISense> Sense);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumTargetsInRange(AActor* AIActor, float Radius);
    
    UFUNCTION(BlueprintPure)
    static FVector GetBestKnownLocation(AActor* AIActor, AActor* TargetActor, FName Socket);
    
    UFUNCTION(BlueprintCallable)
    static bool CalcTargetGroupLocation(AActor* AIActor, float GroupDistance, FVector& Result);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyTargetScoringBoost(AActor* TargetActor, FName BoostName, EAITargetScoringBoost ScoringBoost, float DurationInSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void AISetTargetInBlackboard(AActor* AIActor, const FGbxBlackboardKeySelector& Key, int32 TargetIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AISetScriptedTarget(AActor* AIActor, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    static void AISendCommunication(AActor* AIActor, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static void AIProvokeSpecificSense(AActor* AITarget, AActor* Source, TSubclassOf<UAISense> SenseType, FVector StimulusLocation);
    
    UFUNCTION(BlueprintCallable)
    static void AIProvoke(AActor* AITarget, AActor* Source);
    
    UFUNCTION(BlueprintCallable)
    static void AIPlayerProvoke(AActor* AITarget);
    
    UFUNCTION(BlueprintCallable)
    static AActor* AIGetScriptedTarget(AActor* AIActor);
    
    UFUNCTION(BlueprintCallable)
    static bool AICanCommunicate(AActor* AIActor, float Radius, float MinSenseAgeDelta);
    
};


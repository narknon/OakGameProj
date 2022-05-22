#pragma once
#include "CoreMinimal.h"
#include "OakStreamingInteractionEvent.h"
#include "EnvQueryParams.h"
#include "PollActionInfo.h"
#include "OakStreamingInteractionEvent_Pinata.generated.h"

class AActor;

UCLASS()
class UOakStreamingInteractionEvent_Pinata : public UOakStreamingInteractionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> PinataClass;
    
    UPROPERTY(EditAnywhere)
    FEnvQueryParams PinataSpawnLocationParams;
    
    UPROPERTY(EditAnywhere)
    int32 MaxSpawnAttempt;
    
    UPROPERTY(EditAnywhere)
    float MaxEventDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PollTimerDuration;
    
    UPROPERTY(EditAnywhere)
    int32 MaxItemInPoll;
    
    UPROPERTY(EditAnywhere)
    TArray<FPollActionInfo> PollAvailableActions;
    
    UPROPERTY(EditAnywhere)
    FPollActionInfo NoViewersAction;
    
    UPROPERTY(EditAnywhere)
    FText PollStarted;
    
    UPROPERTY(EditAnywhere)
    FText PollSelected;
    
    UPROPERTY(EditAnywhere)
    FText PollEnded;
    
    UPROPERTY(Transient)
    UClass* PinataClassRef;
    
    UPROPERTY(Transient)
    AActor* PinataActor;
    
    UOakStreamingInteractionEvent_Pinata();
    UFUNCTION(BlueprintCallable)
    void SetPinata(AActor* NewPinataActor);
    
    UFUNCTION()
    void HandleLevelChanged(const int32 OldLevel, const int32 NewLevel);
    
};


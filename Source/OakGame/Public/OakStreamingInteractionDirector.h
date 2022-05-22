#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OakStreamingInteractionDirector.generated.h"

class UOakStreamingInteractionManager;
class UOakStreamingInteractionEvent;

UCLASS(BlueprintType)
class OAKGAME_API UOakStreamingInteractionDirector : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UOakStreamingInteractionManager* StreamingManager;
    
    UPROPERTY(Transient)
    TArray<UOakStreamingInteractionEvent*> EventsPool;
    
    UPROPERTY(Transient)
    TArray<UOakStreamingInteractionEvent*> EventsQueue;
    
    UPROPERTY(Transient)
    TArray<UOakStreamingInteractionEvent*> EventsHistory;
    
    UPROPERTY(Transient)
    TArray<UOakStreamingInteractionEvent*> DirectorTriggeredEventsPool;
    
    UPROPERTY(Transient)
    TArray<UOakStreamingInteractionEvent*> CurrentEvents;
    
public:
    UOakStreamingInteractionDirector();
    UFUNCTION(BlueprintCallable)
    static void RegisterStreamingEvent(UOakStreamingInteractionEvent* EventToRegister);
    
};


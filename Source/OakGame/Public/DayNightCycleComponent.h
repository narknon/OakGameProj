#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DayBeginDelegateDelegate.h"
#include "DayEndDelegateDelegate.h"
#include "DayNightCycleComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDayNightCycleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DayBeginTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DayEndTime;
    
    UPROPERTY(BlueprintAssignable)
    FDayBeginDelegate NotifyDayBegin;
    
    UPROPERTY(BlueprintAssignable)
    FDayEndDelegate NotifyDayEnd;
    
    UDayNightCycleComponent();
    UFUNCTION(BlueprintCallable)
    float GetTimeOfDay();
    
};


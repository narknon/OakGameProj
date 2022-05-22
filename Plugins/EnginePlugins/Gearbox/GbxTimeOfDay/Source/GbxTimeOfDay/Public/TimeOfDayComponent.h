#pragma once
#include "CoreMinimal.h"
#include "TimeOfDayCycleInstanceData.h"
#include "Components/SceneComponent.h"
#include "TimeOfDayComponent.generated.h"

class UDEPRECATED_TimeOfDayCycleInstance;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXTIMEOFDAY_API UTimeOfDayComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTimeOfDayCycleInstanceData TimeOfDayCycleInstanceData;
    
    UPROPERTY()
    UDEPRECATED_TimeOfDayCycleInstance* TimeOfDayCycleInstance;
    
private:
    UPROPERTY(Replicated)
    float TimeOfDay;
    
    UPROPERTY(Replicated)
    uint32 CycleCount;
    
    UPROPERTY(Replicated)
    FName CurrentLayerName;
    
    UPROPERTY(Replicated)
    float TransitionTimeLeft;
    
    UPROPERTY()
    float LastEvaluatedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CinematicTimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bUseCinematicTimeOfDay;
    
public:
    UPROPERTY(Replicated)
    bool bShouldTick;
    
    UTimeOfDayComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetUseCinematicTimeOfDay(bool InUseCinematicTimeOfDay);
    
    UFUNCTION(BlueprintCallable)
    void SetCinematicTimeOfDay(float InCinematicTimeOfDay);
    
};


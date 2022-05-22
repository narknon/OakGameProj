#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "ESmartObjectLookAtRule.h"
#include "ESlotAlignRule.h"
#include "GameplayTagContainer.h"
#include "AIUseSlotComponent.generated.h"

class AController;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API UAIUseSlotComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bSnapToGround;
    
    UPROPERTY(EditAnywhere)
    ESlotAlignRule AlignRule;
    
    UPROPERTY(EditAnywhere)
    bool bInterpOnArrival;
    
    UPROPERTY(EditAnywhere)
    bool bInterpRotationOnArrival;
    
    UPROPERTY(EditAnywhere)
    float InterpOnArrivalTime;
    
    UPROPERTY(EditAnywhere)
    ESmartObjectLookAtRule LookAtRule;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideLookAtRule;
    
    UPROPERTY(EditAnywhere)
    FName LookAtSocket;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer ActionTypes;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    bool bMaxUsers;
    
    UPROPERTY(EditAnywhere)
    int32 MaxUsers;
    
    UPROPERTY(EditAnywhere)
    bool bForceUsePhysNoneWithRootMotion;
    
private:
    UPROPERTY(Transient)
    TArray<AController*> Users;
    
public:
    UAIUseSlotComponent();
private:
    UFUNCTION()
    void GetAvailableSocketNames(TArray<FName>& Array) const;
    
};


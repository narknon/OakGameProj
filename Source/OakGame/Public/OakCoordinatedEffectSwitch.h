#pragma once
#include "CoreMinimal.h"
#include "OakCoordinatedEffectSwitchState.h"
#include "OakCoordinatedEffectSwitch.generated.h"

class UEnum;
class UGbxActionComponent;
class AActor;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakCoordinatedEffectSwitch {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, NotReplicated)
    UEnum* Enum;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    FName NativeEnumName;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    bool bNativeEnum;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    uint8 InitialState;
    
    UPROPERTY(EditAnywhere, EditFixedSize, NotReplicated)
    TArray<FOakCoordinatedEffectSwitchState> States;
    
    UPROPERTY(NotReplicated, Transient)
    uint8 CurrentState;
    
    UPROPERTY(NotReplicated, Transient)
    AActor* Owner;
    
    UPROPERTY(Export, NotReplicated, Transient)
    UGbxActionComponent* ActionComp;
    
    UPROPERTY(Transient)
    uint8 ReplicatedState;
    
public:
    FOakCoordinatedEffectSwitch();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CameraBehavior.generated.h"

class UCameraState;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 bEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUpdatePreViewTarget: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUpdateForRemoteClient: 1;
    
public:
    UCameraBehavior();
    UFUNCTION(BlueprintNativeEvent)
    void Update(float DeltaTime, UCameraState* State);
    
    UFUNCTION(BlueprintNativeEvent)
    void Start(UCameraState* State);
    
    UFUNCTION(BlueprintNativeEvent)
    void End(UCameraState* State);
    
};


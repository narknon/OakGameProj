#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SmartObject.generated.h"

class UGbxActionComponent;
class USmartObjectComponent;

UCLASS()
class GBXAI_API ASmartObject : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    USmartObjectComponent* SmartObjectComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    UGbxActionComponent* GbxActionComponent;
    
public:
    ASmartObject();
    UFUNCTION(BlueprintPure)
    USmartObjectComponent* GetSmartObjectComponent();
    
    UFUNCTION(BlueprintPure)
    UGbxActionComponent* GetGbxActionComponent();
    
};


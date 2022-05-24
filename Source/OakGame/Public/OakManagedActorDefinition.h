#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "GbxDataAsset.h"
#include "EReapOrder.h"
#include "OakManagedActorDefinition.generated.h"

UCLASS()
class OAKGAME_API UOakManagedActorDefinition : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MaxCount;
    
    UPROPERTY(EditAnywhere)
    bool bDestroyOnOwnerDath;
    
    UPROPERTY(EditAnywhere)
    bool bDisplayInUI;
    
    UPROPERTY(EditAnywhere)
    EReapOrder DeathReapOrder;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DeathReapPercent;
    
    UOakManagedActorDefinition();
};


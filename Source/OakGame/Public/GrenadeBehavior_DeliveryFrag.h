#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior_DeliveryBlueprint.h"
#include "GrenadeBehavior_DeliveryFrag.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_DeliveryFrag : public UGrenadeBehavior_DeliveryBlueprint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float FragBounciness;
    
    UPROPERTY(EditDefaultsOnly)
    float FragFriction;
    
public:
    UGrenadeBehavior_DeliveryFrag();
};


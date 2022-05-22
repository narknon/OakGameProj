#pragma once
#include "CoreMinimal.h"
#include "TedioreBehavior.h"
#include "TedioreBehavior_Drunken.generated.h"

class UDrunkenBaseMovementComponent;

UCLASS(EditInlineNew)
class UTedioreBehavior_Drunken : public UTedioreBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UDrunkenBaseMovementComponent* DrunkenTemplate;
    
public:
    UTedioreBehavior_Drunken();
};


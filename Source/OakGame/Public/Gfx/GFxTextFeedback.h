#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxTextFeedback.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class UGFxTextFeedback : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* InnerText;
    
    UPROPERTY(Transient)
    UGbxTextField* InnerTextShadow;
    
public:
    UGFxTextFeedback();
};


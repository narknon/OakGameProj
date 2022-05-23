#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxEchoNetMailboxListCell.generated.h"

class UGbxTextField;
class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UGFxEchoNetMailboxListCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* ExpirationLabel;
    
    UPROPERTY(Transient)
    UGbxTextField* SenderLabel;
    
    UPROPERTY(Transient)
    UGbxTextField* SubjectLabel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SenderIcon;
    
public:
    UGFxEchoNetMailboxListCell();
};


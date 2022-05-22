#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxCSPuzzleTile.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class OAKCS_API UGFxCSPuzzleTile : public UGbxGFxObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* AnimObject;
    
private:
    UPROPERTY(Transient)
    UGbxGFxObject* FocusedFeedback;
    
    UPROPERTY(Transient)
    TArray<UGbxTextField*> PlayerIds;
    
public:
    UGFxCSPuzzleTile();
};


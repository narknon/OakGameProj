#pragma once
#include "CoreMinimal.h"
#include "QuietTimePredicate.h"
#include "QuietTimePredicate_BlockStuff.generated.h"

class UObject;
class UDialogStyle;
class UDialogNameTag;

UCLASS(CollapseCategories, Const, EditInlineNew)
class UQuietTimePredicate_BlockStuff : public UQuietTimePredicate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UObject*> BlockDialogScopeObjects;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BlockKinds;
    
    UPROPERTY(EditAnywhere)
    TArray<UDialogStyle*> BlockStyles;
    
    UPROPERTY(EditAnywhere)
    UDialogNameTag* OnlyForCharacter;
    
    UQuietTimePredicate_BlockStuff();
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "GbxPlayerInput.generated.h"

class UGbxInputRebindContext;
class UGbxInputRebindCategory;

UCLASS(NonTransient)
class GBXINPUT_API UGbxPlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<UGbxInputRebindCategory*> Categories;
    
    UPROPERTY(Transient)
    TMap<UGbxInputRebindCategory*, UGbxInputRebindContext*> RebindCategoryToContext;
    
public:
    UGbxPlayerInput();
};


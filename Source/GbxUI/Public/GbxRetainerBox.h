#pragma once
#include "CoreMinimal.h"
#include "Components/RetainerBox.h"
#include "GbxRetainerWidgetTransformDelegateDelegate.h"
#include "GbxRetainerBox.generated.h"

UCLASS()
class GBXUI_API UGbxRetainerBox : public URetainerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxRetainerWidgetTransformDelegate TransformDelegate;
    
    UGbxRetainerBox();
};


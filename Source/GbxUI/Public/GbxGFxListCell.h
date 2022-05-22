#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "UObject/NoExportTypes.h"
#include "GbxGFxListCell.generated.h"

class UGbxGFxGridScrollingList;
class UGbxGFxObject;

UCLASS(NonTransient)
class GBXUI_API UGbxGFxListCell : public UGbxGFxButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* OwningList;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CellBounds;
    
    UPROPERTY(Transient)
    int32 ListIndex;
    
    UPROPERTY(Transient)
    FVector2D PositionInContainer;
    
    UPROPERTY(Transient)
    float TopOffsetPosition;
    
    UPROPERTY(Transient)
    float BottomOffsetPosition;
    
    UPROPERTY(Transient)
    float LeftOffsetPosition;
    
    UPROPERTY(Transient)
    float RightOffsetPosition;
    
    UPROPERTY(Transient)
    bool bIsReadjustingFocus;
    
public:
    UGbxGFxListCell();
};


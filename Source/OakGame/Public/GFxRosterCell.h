#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "EGFxRosterCellType.h"
#include "GFxRosterCell.generated.h"

class UGbxTextField;
class UGbxGFxObject;
class UPlayerIdentityWidget;

UCLASS(NonTransient)
class UGFxRosterCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* OnlineStatusTextField;
    
    UPROPERTY(Transient)
    UGbxGFxObject* VaultStatusAnimClip;
    
    UPROPERTY(Transient)
    UPlayerIdentityWidget* PlayerIdWidget;
    
    UPROPERTY(Transient)
    UGbxTextField* FriendTextClip;
    
    UPROPERTY(Transient)
    EGFxRosterCellType RosterCellType;
    
public:
    UGFxRosterCell();
};


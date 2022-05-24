#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "OrganizationInfo.h"
#include "CreditsDataAsset.generated.h"

class UDataTable;

UCLASS()
class OAKGAME_API UCreditsDataAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText HeaderText;
    
    UPROPERTY(EditAnywhere)
    FName HeaderTextStyle;
    
    UPROPERTY(EditAnywhere)
    UDataTable* CreditsDataTable;
    
    UPROPERTY(EditAnywhere)
    TArray<FOrganizationInfo> OrganizationInfos;
    
    UPROPERTY(EditAnywhere)
    FName TitleTextStyle;
    
    UPROPERTY(EditAnywhere)
    FName PeopleTextStyle;
    
    UCreditsDataAsset();
};


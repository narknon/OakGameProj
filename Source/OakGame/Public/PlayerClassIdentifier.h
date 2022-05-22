#pragma once
#include "CoreMinimal.h"
#include "Engine/PrimaryAssetLabel.h"
#include "UObject/NoExportTypes.h"
#include "PlayerClassIdentifier.generated.h"

class UDownloadableExpansionData;

UCLASS(BlueprintType)
class OAKGAME_API UPlayerClassIdentifier : public UPrimaryAssetLabel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSoftClassPath CharacterBlueprint;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ShortName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CharacterName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ClassDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCameraPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDownloadableExpansionData* DlcExpansion;
    
    UPROPERTY(EditAnywhere)
    bool bAvailableForDataExtraction;
    
    UPlayerClassIdentifier();
};


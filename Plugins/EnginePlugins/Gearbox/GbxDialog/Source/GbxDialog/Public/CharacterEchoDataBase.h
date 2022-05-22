#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "CharacterEchoDataBase.generated.h"

UCLASS(Abstract)
class GBXDIALOG_API UCharacterEchoDataBase : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> AvailableVoGMoodKeyframes;
    
    UCharacterEchoDataBase();
};


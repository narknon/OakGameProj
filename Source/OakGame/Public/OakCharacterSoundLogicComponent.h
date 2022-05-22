#pragma once
#include "CoreMinimal.h"
#include "CharacterSoundLogicComponent.h"
#include "OakCharacterSoundLogicComponent.generated.h"

class UGbxDialogComponent;
class UDialogNameTag;
class UCharacterSoundData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakCharacterSoundLogicComponent : public UCharacterSoundLogicComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<UDialogNameTag*, UCharacterSoundData*> CharacterSoundData;
    
    UPROPERTY(Export, Transient)
    TArray<UGbxDialogComponent*> CachedDialogComponents;
    
public:
    UOakCharacterSoundLogicComponent();
};


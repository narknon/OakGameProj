#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMovie.h"
#include "GFxControllerDisconnectMovie.generated.h"

class UGbxGFxObject;
class UGbxTextField;

UCLASS()
class OAKGAME_API UGFxControllerDisconnectMovie : public UGbxGFxMovie {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FText ControllerDisconnectHeaderText;
    
    UPROPERTY(EditAnywhere)
    FText ControllerDisconnectBodyText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ContentClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* WindowFrameClip;
    
    UPROPERTY(Transient)
    UGbxTextField* HeaderTextFieldClip;
    
    UPROPERTY(Transient)
    UGbxTextField* BodyTextFieldClip;
    
    UPROPERTY(Transient)
    int32 TotalNumDisconnectMovies;
    
public:
    UGFxControllerDisconnectMovie();
};


#include "AmbientSoundBox.h"
#include "Components/BoxComponent.h"

AAmbientSoundBox::AAmbientSoundBox() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent0"));
}


#include "SDUCaseSpawner.h"

FSDUCaseSpawner::FSDUCaseSpawner() {
    this->SDUData = NULL;
    this->DisplayMesh = NULL;
    this->bSoldOut = false;
    this->AttachmentSocket = NULL;
    this->CameraSocket = NULL;
    this->DisplayMeshComponent = NULL;
    this->TextRenderComponent = NULL;
    this->MouseCollisionComponent = NULL;
}


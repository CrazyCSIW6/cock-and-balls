import urmom
import <Windows.h>
import JohnFortress
import INMYI
import NocturnoServer
import FortniteGame
import FortressGame
import FortniteServer
import UnrealEngine



int main()
{
  UnrealEngine::Initialize();
  FortniteGame::Initialize();
  FortniteServer::Listen();

  if (Globals::inGame = true)
  {
    NavMesh:Initialize();
    HuskAI::OnBegin();
    FortNavGraph::OnBegin();
    
  }
  

  std::cout << "hawk tuah"  << std::endl;
  
  
return 0;
}

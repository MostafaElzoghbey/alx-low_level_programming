#!/bin/bash
echo -e '#!/bin/bash\necho "Please make me win!sasa"' > gm
export LD_PRELOAD=$(pwd)/gm

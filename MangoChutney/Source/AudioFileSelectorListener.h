//
//  AudioFileSelectorListener.h
//  MangoChutney
//
//  Created by Alex Gustafson on 5/13/13.
//
//

#ifndef MangoChutney_AudioFileSelectorListener_h
#define MangoChutney_AudioFileSelectorListener_h

class AudioFileSelectorListener
{
public:
    void fileSelected(const File& file) {};
    void selectionCanceled() {};
};

#endif

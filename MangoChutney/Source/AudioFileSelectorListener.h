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
    virtual void fileSelected(const File& file) = 0;
    virtual void selectionCanceled() = 0;
};

#endif

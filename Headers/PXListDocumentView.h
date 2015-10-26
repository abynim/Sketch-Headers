#import "NSView.h"

@class PXListView;

@interface PXListDocumentView : NSView
{
    PXListView *_listView;
    unsigned long long _dropHighlight;
}

@property(nonatomic) unsigned long long dropHighlight; // @synthesize dropHighlight=_dropHighlight;
@property(nonatomic) __weak PXListView *listView; // @synthesize listView=_listView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)isFlipped;

@end


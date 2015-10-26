#import "CHSheetController.h"

@class MSDocument, NSTextField;

@interface MSResizeSheet : CHSheetController
{
    NSTextField *scalingField;
    NSTextField *newWidthField;
    NSTextField *newHeightField;
    NSTextField *labelField;
    double _scale;
    MSDocument *_doc;
}

@property(retain, nonatomic) MSDocument *doc; // @synthesize doc=_doc;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (void).cxx_destruct;
- (id)selectedLayers;
- (struct CGPoint)midPointForScaling;
- (void)confirm:(id)arg1;
- (struct CGRect)oldRect;
- (void)didChangeValues;
- (void)willChangeValues;
@property(nonatomic) double height; // @dynamic height;
- (void)setNilValueForKey:(id)arg1;
@property(nonatomic) double width; // @dynamic width;
- (void)awakeFromNib;

@end


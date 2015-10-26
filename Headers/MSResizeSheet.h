#import "CHSheetController.h"

@class NSDictionary, NSTextField, NSTimer;

@interface MSResizeSheet : CHSheetController
{
    double _scale;
    NSTextField *_scalingField;
    NSTextField *_widthField;
    NSTextField *_heightField;
    NSTextField *_labelField;
    NSDictionary *_selectedObjectsBackup;
    NSTimer *_refreshTimer;
    struct CGRect _originalRect;
}

@property(nonatomic) struct CGRect originalRect; // @synthesize originalRect=_originalRect;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) NSDictionary *selectedObjectsBackup; // @synthesize selectedObjectsBackup=_selectedObjectsBackup;
@property(retain, nonatomic) NSTextField *labelField; // @synthesize labelField=_labelField;
@property(retain, nonatomic) NSTextField *heightField; // @synthesize heightField=_heightField;
@property(retain, nonatomic) NSTextField *widthField; // @synthesize widthField=_widthField;
@property(retain, nonatomic) NSTextField *scalingField; // @synthesize scalingField=_scalingField;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (void).cxx_destruct;
- (id)doc;
- (void)restoreCurrentPage;
- (void)scaleSelectedObjects;
- (void)cancel:(id)arg1;
- (void)confirm:(id)arg1;
- (void)didChangeValues;
- (void)willChangeValues;
@property(nonatomic) double height; // @dynamic height;
- (void)setNilValueForKey:(id)arg1;
@property(nonatomic) double width; // @dynamic width;
- (void)awakeFromNib;

@end


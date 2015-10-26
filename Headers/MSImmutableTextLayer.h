#import "_MSImmutableTextLayer.h"

@class NSBezierPath;

@interface MSImmutableTextLayer : _MSImmutableTextLayer
{
    BOOL _isEditingText;
    NSBezierPath *_firstUnderlyingShapePath;
    double _fontSize;
}

@property(nonatomic) BOOL isEditingText; // @synthesize isEditingText=_isEditingText;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSBezierPath *firstUnderlyingShapePath; // @synthesize firstUnderlyingShapePath=_firstUnderlyingShapePath;
- (void).cxx_destruct;
- (id)initWithMutableModelObject:(id)arg1;

@end


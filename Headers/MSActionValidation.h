#import "NSObject.h"

@class NSMutableArray, NSString;

@interface MSActionValidation : NSObject
{
    NSMutableArray *supportedHandlers;
    NSMutableArray *unsupportedHandlers;
    NSMutableArray *supportedLayers;
    NSMutableArray *unsupportedLayers;
    unsigned long long _layerCountComparison;
    unsigned long long _layerCount;
    id <MSBasicDelegate> _delegate;
    NSString *_currentHandlerKey;
}

@property(copy, nonatomic) NSString *currentHandlerKey; // @synthesize currentHandlerKey=_currentHandlerKey;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long layerCount; // @synthesize layerCount=_layerCount;
@property(nonatomic) unsigned long long layerCountComparison; // @synthesize layerCountComparison=_layerCountComparison;
- (void).cxx_destruct;
- (void)dealloc;
- (id)or;
- (id)doesNotSupportLayers:(id)arg1;
- (id)requiresLayers:(id)arg1;
- (id)requiresNormalHandler;
- (id)handler:(id)arg1;
- (id)layerCountAtLeast:(unsigned long long)arg1;
- (BOOL)unsupportedHandlersIsValid;
- (BOOL)supportedHandlersIsValid;
- (BOOL)layerIsUnsupported:(id)arg1;
- (BOOL)layerIsSupported:(id)arg1;
- (BOOL)selectedLayersIsValid;
- (BOOL)layerCountIsValid;
- (BOOL)validateWithDelegate:(id)arg1 handler:(id)arg2;
- (id)init;

@end


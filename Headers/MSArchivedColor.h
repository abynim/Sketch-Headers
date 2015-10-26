#import "NSObject.h"

#import "NSCoding.h"

@interface MSArchivedColor : NSObject <NSCoding>
{
    double r;
    double g;
    double b;
    double a;
}

- (void)encodeWithCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


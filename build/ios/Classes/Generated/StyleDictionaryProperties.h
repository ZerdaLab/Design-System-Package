
//
// StyleDictionaryProperties.h
//

// Do not edit directly
// Generated on Tue, 13 Sep 2022 13:52:53 GMT


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface StyleDictionaryProperties : NSObject

+ (NSDictionary *)properties;
+ (NSDictionary *)getProperty:(NSString *)keyPath;
+ (nonnull)getValue:(NSString *)keyPath;

@end

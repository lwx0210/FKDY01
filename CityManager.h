#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CityManager : NSObject

+ (instancetype)sharedInstance;

- (nullable NSString *)getProvinceNameWithCode:(NSString *)code;
- (nullable NSString *)getCityNameWithCode:(NSString *)code;
- (nullable NSString *)getDistrictNameWithCode:(NSString *)code;
- (nullable NSString *)getStreetNameWithCode:(NSString *)code;
+ (void)fetchLocationWithGeonameId:(NSString *)geonameId completionHandler:(void (^)(NSDictionary *locationInfo, NSError *error))completionHandler;
@end

NS_ASSUME_NONNULL_END

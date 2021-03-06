//
//  LSWeatherController.h
//  WeatherObjC
//
//  Created by Ilgar Ilyasov on 11/13/18.
//  Copyright © 2018 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSWeatherController : NSObject

@property (nonatomic) NSArray *forecasts;
- (void)searchWeatherWithZip:(NSString *)searchTerm completion: (void (^)(NSArray *forecasts, NSError*error))completion;

@end

NS_ASSUME_NONNULL_END

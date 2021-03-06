//
//  STPFormEncoder.h
//  Stripe
//
//  Created by Jack Flintermann on 1/8/15.
//  Copyright (c) 2015 Stripe, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class STPCardParams, STPBankAccountParams;
@protocol STPFormEncodable;

@interface STPFormEncoder : NSObject

+ (nonnull NSDictionary *)dictionaryForObject:(nonnull NSObject<STPFormEncodable> *)object;

+ (nonnull NSData *)formEncodedDataForRootObjectName:(nonnull NSString *)rootObjectName parameters:(nonnull NSDictionary *)parameters;

+ (nonnull NSString *)stringByURLEncoding:(nonnull NSString *)string;

+ (nonnull NSString *)stringByReplacingSnakeCaseWithCamelCase:(nonnull NSString *)input;

+ (nonnull NSString *)queryStringFromParameters:(nonnull NSDictionary *)parameters;

@end

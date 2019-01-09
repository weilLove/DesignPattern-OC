//
//  MediatorProtocol.h
//  中介者模式
//
//  Created by weil on 2019/1/9.
//  Copyright © 2019 allyoga. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class BasePerson;
@protocol MediatorProtocol <NSObject>
- (void)constactWithMessage:(NSString *)message person:(BasePerson *)person;
@end

NS_ASSUME_NONNULL_END

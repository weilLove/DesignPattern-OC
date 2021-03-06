//
//  OperatorProtocol.h
//  工厂方法模式
//
//  Created by weil on 2018/12/29.
//  Copyright © 2018 allyoga. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OperatorProtocol <NSObject>
- (void)operatorAction:(int)a andB:(int)b;
@end

NS_ASSUME_NONNULL_END

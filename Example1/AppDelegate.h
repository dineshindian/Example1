//
//  AppDelegate.h
//  Example1
//
//  Created by Dinesh Gurubaran on 08/10/20.
//  Copyright © 2020 Dinesh Gurubaran. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


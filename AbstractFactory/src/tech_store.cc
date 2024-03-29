#include "tech_store.h"
#include "smartphone.h"
#include "notebook.h"
#include "samsung_factory.h"
#include "apple_factory.h"
#include <vector>
#include <iostream>

using SmartphoneProducts = std::vector<std::unique_ptr<Smartphone>>;
using NotebookProducts = std::vector<std::unique_ptr<Notebook>>;

TechStore::TechStore(StoreType store_type, std::unique_ptr<TechFactory> factory)
  : store_type_{store_type}, tech_factory_{std::move(factory)} {}

void TechStore::ShowProducts()
{
  SmartphoneProducts smartphone_products;
  NotebookProducts notebook_products;

  if (store_type_ == StoreType::EXPENSIVE) {
    smartphone_products.emplace_back(tech_factory_->CreateSmartphone(SmartphoneType::FLAGSHIP));
    notebook_products.emplace_back(tech_factory_->CreateNotebook(NotebookType::WORKSTATION));
  }
  else if (store_type_ == StoreType::CHEAP) {
    smartphone_products.emplace_back(tech_factory_->CreateSmartphone(SmartphoneType::BUDGET));
    notebook_products.emplace_back(tech_factory_->CreateNotebook(NotebookType::DAILY_USE));    
  }

  for(const auto& product : smartphone_products) {
    std::cout << product->GetInfo() << std::endl;
  }  

  for(const auto& product : notebook_products) {
    std::cout << product->GetInfo() << std::endl;
  }  
}
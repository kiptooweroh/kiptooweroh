function searchItem() {
    const query = document.getElementById('searchInput').value.toLowerCase(); // Get the search query in lowercase
    const items = document.querySelectorAll('.search-item'); // Target all elements with the class 'search-item'

    items.forEach(item => {
        const textContent = item.textContent.toLowerCase(); // Get the text content of each item in lowercase
        if (textContent.includes(query)) {
            item.style.display = 'block'; // Show item if it matches the query
        } else {
            item.style.display = 'none'; // Hide item if it doesn't match
        }
    });
}
